/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:58:28 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Celestial/FigCapturePipeline.h>

@class NSString, BWRemoteQueueSinkNode, BWNodeOutput;

@interface FigCaptureAudioDataSinkPipeline : FigCapturePipeline {

	NSString* _sinkID;
	BWRemoteQueueSinkNode* _remoteQueueSinkNode;
	BWNodeOutput* _upstreamOutput;

}

@property (assign,nonatomic) BOOL discardsSampleData; 
@property (nonatomic,readonly) NSString * sinkID;                                        //@synthesize sinkID=_sinkID - In the implementation block
@property (nonatomic,readonly) BWRemoteQueueSinkNode * remoteQueueSinkNode;              //@synthesize remoteQueueSinkNode=_remoteQueueSinkNode - In the implementation block
+(void)initialize;
-(NSString *)sinkID;
-(void)setDiscardsSampleData:(BOOL)arg1 ;
-(BOOL)discardsSampleData;
-(BWRemoteQueueSinkNode *)remoteQueueSinkNode;
-(id)initWithConfiguration:(id)arg1 graph:(id)arg2 sourceAudioOutput:(id)arg3 clientPID:(id)arg4 renderDelegate:(id)arg5 ;
-(int)_buildAudioDataSinkPipeline:(id)arg1 graph:(id)arg2 sourceAudioOutput:(id)arg3 clientPID:(id)arg4 renderDelegate:(id)arg5 ;
-(void)dealloc;
@end

