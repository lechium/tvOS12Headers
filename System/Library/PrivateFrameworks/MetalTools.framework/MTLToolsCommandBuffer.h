/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 3:10:48 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/MetalTools.framework/MetalTools
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MetalTools/MetalTools-Structs.h>
#import <MetalTools/MTLToolsObject.h>
#import <libobjc.A.dylib/MTLCommandBufferSPI.h>

@class NSDictionary, NSMutableDictionary, NSMutableSet, MTLToolsPointerArray, NSString, NSError;

@interface MTLToolsCommandBuffer : MTLToolsObject <MTLCommandBufferSPI> {

	struct {
		unsigned hasCommit : 1;
		unsigned addedCompletedHandler : 1;
		unsigned addedScheduledHandler : 1;
		unsigned padding : 29;
	}  _flags;
	NSMutableSet* _retainedObjects;
	MTLToolsPointerArray* _renderCommandEncoders;
	MTLToolsPointerArray* _computeCommandEncoders;
	MTLToolsPointerArray* _blitCommandEncoders;
	MTLToolsPointerArray* _parallelRenderCommandEncoders;
	MTLToolsPointerArray* _fragmentRenderCommandEncoders;
	ILayerLockingPolicy* _retainedObjectsLock;

}

@property (assign,nonatomic) ILayerLockingPolicy* retainedObjectsLock;                            //@synthesize retainedObjectsLock=_retainedObjectsLock - In the implementation block
@property (nonatomic,readonly) NSMutableSet * retainedObjects;                                    //@synthesize retainedObjects=_retainedObjects - In the implementation block
@property (nonatomic,readonly) MTLToolsPointerArray * renderCommandEncoders;                      //@synthesize renderCommandEncoders=_renderCommandEncoders - In the implementation block
@property (nonatomic,readonly) MTLToolsPointerArray * computeCommandEncoders;                     //@synthesize computeCommandEncoders=_computeCommandEncoders - In the implementation block
@property (nonatomic,readonly) MTLToolsPointerArray * blitCommandEncoders;                        //@synthesize blitCommandEncoders=_blitCommandEncoders - In the implementation block
@property (nonatomic,readonly) MTLToolsPointerArray * parallelRenderCommandEncoders;              //@synthesize parallelRenderCommandEncoders=_parallelRenderCommandEncoders - In the implementation block
@property (nonatomic,readonly) MTLToolsPointerArray * fragmentRenderCommandEncoders;              //@synthesize fragmentRenderCommandEncoders=_fragmentRenderCommandEncoders - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) id<MTLDevice> device; 
@property (readonly) id<MTLCommandQueue> commandQueue; 
@property (readonly) BOOL retainedReferences; 
@property (copy) NSString * label; 
@property (readonly) double kernelStartTime; 
@property (readonly) double kernelEndTime; 
@property (readonly) double GPUStartTime; 
@property (readonly) double GPUEndTime; 
@property (readonly) unsigned long long status; 
@property (readonly) NSError * error; 
@property (assign,getter=getListIndex,nonatomic) unsigned long long listIndex; 
@property (getter=isProfilingEnabled) BOOL profilingEnabled; 
@property (readonly) NSDictionary * profilingResults; 
@property (nonatomic,readonly) NSMutableDictionary * userDictionary; 
-(id)initWithBaseObject:(id)arg1 parent:(id)arg2 ;
-(void)executeSynchronizationNotifications:(int)arg1 ;
-(void)executeSynchronizationNotifications:(int)arg1 scope:(unsigned long long)arg2 resources:(const id*)arg3 count:(unsigned long long)arg4 ;
-(void)addSynchronizationNotification:(/*^block*/id)arg1 ;
-(void)waitUntilCompleted;
-(BOOL)isProfilingEnabled;
-(void)setProfilingEnabled:(BOOL)arg1 ;
-(void)waitUntilScheduled;
-(void)addCompletedHandler:(/*^block*/id)arg1 ;
-(void)enqueue;
-(void)addScheduledHandler:(/*^block*/id)arg1 ;
-(void)presentDrawable:(id)arg1 ;
-(void)presentDrawable:(id)arg1 atTime:(double)arg2 ;
-(void)presentDrawable:(id)arg1 afterMinimumDuration:(double)arg2 ;
-(id)blitCommandEncoder;
-(id)renderCommandEncoderWithDescriptor:(id)arg1 ;
-(id)computeCommandEncoder;
-(id)computeCommandEncoderWithDispatchType:(unsigned long long)arg1 ;
-(void)encodeWaitForEvent:(id)arg1 value:(unsigned long long)arg2 ;
-(void)encodeSignalEvent:(id)arg1 value:(unsigned long long)arg2 ;
-(id)parallelRenderCommandEncoderWithDescriptor:(id)arg1 ;
-(void)pushDebugGroup:(id)arg1 ;
-(void)popDebugGroup;
-(id<MTLCommandQueue>)commandQueue;
-(BOOL)retainedReferences;
-(double)kernelStartTime;
-(double)kernelEndTime;
-(double)GPUStartTime;
-(double)GPUEndTime;
-(NSDictionary *)profilingResults;
-(NSMutableDictionary *)userDictionary;
-(id)sampledRenderCommandEncoderWithDescriptor:(id)arg1 programInfoBuffer:(SCD_Struct_MT5*)arg2 capacity:(unsigned long long)arg3 ;
-(id)sampledComputeCommandEncoderWithProgramInfoBuffer:(SCD_Struct_MT5*)arg1 capacity:(unsigned long long)arg2 ;
-(id)sampledComputeCommandEncoderWithDispatchType:(unsigned long long)arg1 programInfoBuffer:(SCD_Struct_MT5*)arg2 capacity:(unsigned long long)arg3 ;
-(id)debugCommandEncoder;
-(id)fragmentRenderCommandEncoderWithDescriptor:(id)arg1 ;
-(id)sampledFragmentRenderCommandEncoderWithDescriptor:(id)arg1 programInfoBuffer:(SCD_Struct_MT5*)arg2 capacity:(unsigned long long)arg3 ;
-(BOOL)commitAndWaitUntilSubmitted;
-(void)addPurgedResource:(id)arg1 ;
-(void)addPurgedHeap:(id)arg1 ;
-(unsigned long long)getListIndex;
-(void)acceptVisitor:(id)arg1 ;
-(void)addRetainedObject:(id)arg1 ;
-(void)clearRetainedObjects;
-(void)setRetainedObjectsLock:(ILayerLockingPolicy*)arg1 ;
-(id)unwrapMTLRenderPassDescriptor:(id)arg1 ;
-(void)willEncodeSignalEvent:(id)arg1 value:(unsigned long long)arg2 writeableResources:(id)arg3 ;
-(NSMutableSet *)retainedObjects;
-(MTLToolsPointerArray *)renderCommandEncoders;
-(MTLToolsPointerArray *)computeCommandEncoders;
-(MTLToolsPointerArray *)blitCommandEncoders;
-(MTLToolsPointerArray *)parallelRenderCommandEncoders;
-(MTLToolsPointerArray *)fragmentRenderCommandEncoders;
-(ILayerLockingPolicy*)retainedObjectsLock;
-(void)dealloc;
-(void)commit;
-(NSString *)label;
-(unsigned long long)status;
-(void)setLabel:(NSString *)arg1 ;
-(NSError *)error;
@end

