/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:00:52 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MSPublishStorageProtocol <MSStorageProtocol>
@property (assign,nonatomic) id<MSPublishStorageProtocolDelegate> delegate; 
@required
-(void)computeHashForAsset:(id)arg1;
-(void)publishAssets:(id)arg1 URL:(id)arg2;
-(void)abort;
-(void)setDelegate:(id)arg1;
-(id<MSPublishStorageProtocolDelegate>)delegate;

@end
