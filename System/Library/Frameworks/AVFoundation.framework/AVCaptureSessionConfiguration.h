/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:58:32 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray, NSHashTable;

@interface AVCaptureSessionConfiguration : NSObject {

	long long _configurationID;
	NSArray* _inputs;
	NSArray* _outputs;
	NSHashTable* _videoPreviewLayers;
	NSArray* _connections;

}

@property (readonly) long long configurationID;                     //@synthesize configurationID=_configurationID - In the implementation block
@property (readonly) NSArray * inputs;                              //@synthesize inputs=_inputs - In the implementation block
@property (readonly) NSArray * outputs;                             //@synthesize outputs=_outputs - In the implementation block
@property (readonly) NSHashTable * videoPreviewLayers;              //@synthesize videoPreviewLayers=_videoPreviewLayers - In the implementation block
@property (readonly) NSArray * connections;                         //@synthesize connections=_connections - In the implementation block
-(long long)configurationID;
-(NSArray *)outputs;
-(NSArray *)inputs;
-(NSHashTable *)videoPreviewLayers;
-(id)initWithConfigurationID:(long long)arg1 inputs:(id)arg2 outputs:(id)arg3 videoPreviewLayers:(id)arg4 connections:(id)arg5 ;
-(id)uniqueInputs:(id)arg1 ;
-(id)uniqueOutputs:(id)arg1 ;
-(id)uniqueConnections:(id)arg1 ;
-(id)uniqueVideoPreviewLayers:(id)arg1 ;
-(NSArray *)connections;
-(void)dealloc;
@end

