/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:04:06 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class VMUVMRegionTracker, NSSet;


@protocol VMUStackLogReader <NSObject>
@property (readonly) unsigned task; 
@property (readonly) BOOL is64bit; 
@property (readonly) BOOL inspectingLiveProcess; 
@property (readonly) BOOL usesLiteMode; 
@property (readonly) VMUVMRegionTracker * regionTracker; 
@property (nonatomic,retain) NSSet * excludedFrames; 
@optional
-(unsigned long long)liteModeStackIDforAddress:(unsigned long long)arg1 size:(unsigned long long)arg2;
-(unsigned long long)liteModeStackIDforVMregionAddress:(unsigned long long)arg1;

@required
-(id)vmuVMRegionForAddress:(unsigned long long)arg1;
-(long long)getFramesForStackID:(unsigned long long)arg1 stackFramesBuffer:(unsigned long long*)arg2;
-(long long)getFramesForNode:(unsigned)arg1 inLiteZone:(BOOL)arg2 stackFramesBuffer:(unsigned long long*)arg3;
-(id)symbolicatedBacktraceForFrames:(unsigned long long*)arg1 frameCount:(long long)arg2 options:(unsigned long long)arg3;
-(BOOL)usesLiteMode;
-(id)binaryImagePathForPCaddress:(unsigned long long)arg1;
-(id)functionNameForPCaddress:(unsigned long long)arg1;
-(VMURange*)functionRangeContainingPCaddress:(unsigned long long)arg1;
-(VMURange*)binaryImageRangeForPCaddress:(unsigned long long)arg1;
-(id)sourceFileNameAndLineNumberForPCaddress:(unsigned long long)arg1 fullPath:(BOOL)arg2;
-(int)enumerateRecords:(/*^block*/id)arg1;
-(long long)getFramesForAddress:(unsigned long long)arg1 size:(unsigned long long)arg2 inLiteZone:(BOOL)arg3 stackFramesBuffer:(unsigned long long*)arg4;
-(id)sourcePathForPCaddress:(unsigned long long)arg1;
-(id)sourceFileNameForPCaddress:(unsigned long long)arg1;
-(unsigned)sourceLineNumberForPCaddress:(unsigned long long)arg1;
-(id)symbolicatedBacktraceForNode:(unsigned)arg1 nodeDetails:(/*function pointer*/void*)arg2 isLiteZone:(BOOL)arg3 options:(unsigned long long)arg4;
-(id)symbolicatedBacktraceForStackID:(unsigned long long)arg1 isLiteZone:(BOOL)arg2 options:(unsigned long long)arg3;
-(BOOL)inspectingLiveProcess;
-(VMUVMRegionTracker *)regionTracker;
-(NSSet *)excludedFrames;
-(void)setExcludedFrames:(id)arg1;
-(BOOL)is64bit;
-(unsigned)task;

@end

