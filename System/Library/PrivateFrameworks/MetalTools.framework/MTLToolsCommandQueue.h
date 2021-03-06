/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 3:10:48 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/MetalTools.framework/MetalTools
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MetalTools/MTLToolsObject.h>
#import <libobjc.A.dylib/MTLCommandQueueSPI.h>

@class MTLToolsPointerArray, NSString;

@interface MTLToolsCommandQueue : MTLToolsObject <MTLCommandQueueSPI> {

	MTLToolsPointerArray* _commandBuffers;

}

@property (nonatomic,readonly) MTLToolsPointerArray * commandBuffers;                               //@synthesize commandBuffers=_commandBuffers - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (copy) NSString * label; 
@property (readonly) id<MTLDevice> device; 
@property (assign) int backgroundTrackingPID; 
@property (readonly) unsigned long long maxCommandBufferCount; 
@property (readonly) unsigned long long qosClass; 
@property (readonly) long long qosRelativePriority; 
@property (assign) BOOL skipRender; 
@property (assign) BOOL executionEnabled; 
@property (assign) BOOL isOpenGLQueue; 
@property (getter=isProfilingEnabled) BOOL profilingEnabled; 
@property (assign,getter=isStatEnabled,nonatomic) BOOL StatEnabled; 
@property (assign,getter=getStatOptions,nonatomic) unsigned long long StatOptions; 
@property (assign,getter=getStatLocations,nonatomic) unsigned long long StatLocations; 
-(id)initWithBaseObject:(id)arg1 parent:(id)arg2 ;
-(id)commandBuffer;
-(id)commandBufferWithUnretainedReferences;
-(void)insertDebugCaptureBoundary;
-(unsigned long long)getGPUPriority;
-(BOOL)setGPUPriority:(unsigned long long)arg1 ;
-(BOOL)setGPUPriority:(unsigned long long)arg1 offset:(unsigned short)arg2 ;
-(unsigned long long)getBackgroundGPUPriority;
-(BOOL)setBackgroundGPUPriority:(unsigned long long)arg1 ;
-(BOOL)setBackgroundGPUPriority:(unsigned long long)arg1 offset:(unsigned short)arg2 ;
-(void)setSubmissionQueue:(id)arg1 ;
-(void)setCompletionQueue:(id)arg1 ;
-(int)backgroundTrackingPID;
-(void)setBackgroundTrackingPID:(int)arg1 ;
-(unsigned long long)maxCommandBufferCount;
-(unsigned long long)qosClass;
-(long long)qosRelativePriority;
-(BOOL)skipRender;
-(void)setSkipRender:(BOOL)arg1 ;
-(BOOL)executionEnabled;
-(void)setExecutionEnabled:(BOOL)arg1 ;
-(BOOL)isOpenGLQueue;
-(void)setIsOpenGLQueue:(BOOL)arg1 ;
-(BOOL)isProfilingEnabled;
-(void)setProfilingEnabled:(BOOL)arg1 ;
-(id)availableCounters;
-(int)requestCounters:(id)arg1 ;
-(int)requestCounters:(id)arg1 withIndex:(unsigned long long)arg2 ;
-(id)getRequestedCounters;
-(id)subdivideCounterList:(id)arg1 ;
-(void)addPerfSampleHandler:(/*^block*/id)arg1 ;
-(id)counterInfo;
-(BOOL)isStatEnabled;
-(void)setStatEnabled:(BOOL)arg1 ;
-(unsigned long long)getStatOptions;
-(void)setStatOptions:(unsigned long long)arg1 ;
-(unsigned long long)getStatLocations;
-(void)setStatLocations:(unsigned long long)arg1 ;
-(void)acceptVisitor:(id)arg1 ;
-(MTLToolsPointerArray *)commandBuffers;
-(void)dealloc;
-(NSString *)label;
-(void)setLabel:(NSString *)arg1 ;
-(void)finish;
@end

