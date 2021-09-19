--[[
	Aodaruma.lua(ver 1.00)

	last edit: 
	
	developed by Aodaruma.
	(@Aodaruma_)

	logs------------------
		ver1.00:
			created.

]]

require("rikky_module")
----------------------------------------------------------------------------------------------------
--[[
	this function writes log when Aviutl isn't encoding
	these log written on DebugMonitorTool
	(DL software url: http://www.vector.co.jp/soft/dl/winnt/prog/se278126.html )
]]
local log		= function(s) if obj.getinfo("saving")==false then debug_print(s) end end

----------------------------------------------------------------------------------------------------
----------------------------------------------------------------------------------------------------
local preparingMessageStyle
				= function(type,isUsingLoad,n)
	--[[
		can be selected in these:
			- title
			- sbtitle
			- index
			- description

		any unknown selects will be selected as "description"

		isUsingLoad can select whether to display by using function "obj.load"
		n can set the letter size(no selects will be set default size)
	]]
	isUsingLoad = isUsingLoad or false
	if 		type=="title" 		then
		n = n or 60
		if isUsingLoad then
			return string.format("<s%s,メイリオ><s%s,小塚ゴシック Pr6N H><s%s,Koruri Bold>",n,n,n)
		else
			obj.setfont("メイリオ",				n)
			obj.setfont("小塚ゴシック Pr6N H",	n)
			obj.setfont("Koruri Bold",		n)
		end

	elseif 	type=="subtitle" 	then
		n = n or 40
		if isUsingLoad then
			return string.format("<s%s,メイリオ><s%s,小塚ゴシック Pr6N H><s%s,Koruri Semibold>",n,n,n)
		else
			obj.setfont("メイリオ",				n)
			obj.setfont("小塚ゴシック Pr6N H",	n)
			obj.setfont("Koruri Semibold",	n)
		end

	elseif type=="index"		then
		n = n or 20
		if isUsingLoad then
			return string.format("<s%s,MS Pゴシック><s%s,小塚ゴシック Pr6N H><s%s,Courier New>",n,n,n)
		else
			obj.setfont("MS Pゴシック",			n)
			obj.setfont("小塚ゴシック Pr6N R",	n)
			obj.setfont("Courier New",		n)
		end

	else	-- type=="description"
		n = n or 30
		if isUsingLoad then
			return string.format("<s%s,メイリオ><s%s,Courier New><s%s,小塚ゴシック Pr6N M><s%s,Koruri Regular>",n,n,n,n)
		else
			obj.setfont("メイリオ",				n)
			obj.setfont("Courier New",		n)
			obj.setfont("小塚ゴシック Pr6N M",	n)
			obj.setfont("Koruri Regular",	n)
		end

	end
	return false
end

local throwError= function(t,s,at,l)
--[[
	this function throws errors
	error type can be selected in these:
		- fatal
		- warning
	
	in case of unknown selects and none selected, it throws error(written on Aviutl and DebugMonitorTool)

]]
	local errortype,errorcol
	l = l or 2
	if 		t=="fatal" 		then
		errortype 	= "Fatal Error"
		errorcol	= "fb4762"
	elseif	t=="warning" 	then
		errortype	= "Warning"
		errorcol	= "ffcc00"
	else
		throwError("fatal","unknown errortype selected","throwError")
	end

	local tl,d,i=preparingMessageStyle("title",true),preparingMessageStyle("description",true),preparingMessageStyle("index",true)

	obj.load(tl.."<#"..errorcol..">"..errortype.."\n<#bfbfbf>"..d..s.."\n<#8f8f8f>"..i.."at "..at.."(); thrown by Aodaruma.lua")
	if t=="fatal" then
		error(errortype..": "..s.." : run on "..at.."(); thrown by Aodaruma.lua",l)
	end
end

----------------------------------------------------------------------------------------------------
local getMessageStyleColors
				= function(t,isString)
	--[[
		can be selected in these:
			- error
			- warning
			- good
			- description
			- index

		any selects must be string type.
		also, in case of unknown selects and none selected, it throws error(written on Aviutl and DebugMonitorTool)

		isUsingLoad can select whether returning string type
	]]
	isString = isString or false

	if 		t=="error" 			then
		if isString then return "fb4762" end
		return 0xfb4762

	elseif	t=="warning" 		then
		if isString then return "ffcc00" end
		return 0xffcc00

	elseif 	t=="good"			then
		if isString then return "bbd716" end
		return 0xbbd716

	elseif 	t=="description"	then
		if isString then return "e0e0e0" end
		return 0xe0e0e0

	elseif	t=="index"			then
		if isString then return "355c7d" end
		return 0x355c7d

	else
		throwError("fatal","unknown message style color type selected","getMessageStyleColors",3)
	end
end

----------------------------------------------------------------------------------------------------
local rand		= function(min,max,seed,isStandardize)
--[[
	returning random numbers
	function requires minNumber and maxNumber
	
	seed can be set random seeds
	isStandardize can be selected whether the random is based on global positions
]]
	seed		  = seed or 0
	isStandardize = isStandardize or true
	if isStandardize then
		return obj.rand(min,max,0,seed)
	else
		return obj.rand(min,max,obj.layer,seed)
	end
end
----------------------------------------------------------------------------------------------------
local origsin,origcos,origtan =
	function(n) return math.sin(math.rad(n)) end,
	function(n) return math.cos(math.rad(n)) end,
	function(n) return math.tan(math.rad(n)) end

local distance = function(coorarray)
	local sum = 0
	for i=1,#array do
		if type(array[i])=="number" then
			sum = sum + array[i]^2
		end
	end
	return math.sqrt(sum)
end

-- n次元回転行列飽きた...
--local rotating = function(coorarray,vectorarray) 
--	local coors = {}
--end
----------------------------------------------------------------------------------------------------
--[[
	checking whether rikky_module "array" exists.
	this function returns true if riky_module array exists
]]
local checkRm 	= function() if rikky_module then return true else return false end end

----------------------------------------------------------------------------------------------------
local saving,reading,clearing,getIsExist=
--[[
	saving,reading,clearing the images, and get whether the images exist.

	these functions don't neccensary require rikky_module.
	if rikky_module array not exists, using Aviutl cache.
	using rikky_module, these require over version 1.0 of rikky_module.

	bn(as basename) can be selected the name of images base index.
		in order to identify images on global name spaces
	s(as name) is set the name of images.

	these selects must be string type.

	in case of saving function:
		p can be selected whether caches

]]
	function(bn,s,p)
		bn=bn or ""
		if checkRm() then
			if p then rikky_module.image("w+",bn..s) else rikky_module.image("w",bn..s) end
		else
			obj.copybuffer("cache:"..bn..":"..s,"obj")
		end
	end,
	function(bn,s)
		bn=bn or ""
		if checkRm() then
			rikky_module.image("r",bn..s)
		else
			obj.copybuffer("obj","cache:"..bn..":"..s)
		end
	end,
	function(bn,s)
		bn=bn or ""
		if checkRm() then
			rikky_module.image("c",bn..s)
		else
			-- obj.copybuffer("cache:"..bn..":"..s)
		end
	end,
	function(bn,s)
		bn=bn or ""
		local g
		if checkRm() then
			g=rikky_module.image("i",bn..s)
			if type(g)=="boolean" and g==false then return 0 else return 1 end
		end
		return -1
	end

----------------------------------------------------------------------------------------------------
----------================================================================================----------
----------------------------------------------------------------------------------------------------
Aodaruma={
	log				=	log,
	throwError 			=	throwError,
	rand			=	rand,
	getcols 		=	getMessageStyleColors,
	calcurations	=	{
		sin 		=	origsin,
		cos 		=	origcos,
		tan 		=	origtan,
		distance	=	distance,
	},
	styles			=	{
		message 		=	preparingMessageStyle
	},
	modules			=	{
		checkRikkyModule=checkRm
	},
	images			=	{
		save			=	saving,
		read 			=	reading,
		clear 			=	clearing,
		getExist 		=	getIsExist
	}
}