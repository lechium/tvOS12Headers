/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:08:27 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol UITextInputPayloadDelegate;
@class NSArray;

@interface UITextInputPayloadController : NSObject {

	NSArray* _supportedPayloadIds;
	id<UITextInputPayloadDelegate> _payloadDelegate;

}

@property (nonatomic,copy) NSArray * supportedPayloadIds;                                 //@synthesize supportedPayloadIds=_supportedPayloadIds - In the implementation block
@property (assign,nonatomic) id<UITextInputPayloadDelegate> payloadDelegate;              //@synthesize payloadDelegate=_payloadDelegate - In the implementation block
+(id)sharedInstance;
+(void)releaseSharedInstance;
-(void)dealloc;
-(void)setSupportedPayloadIds:(NSArray *)arg1 ;
-(NSArray *)supportedPayloadIds;
-(id<UITextInputPayloadDelegate>)payloadDelegate;
-(void)setPayloadDelegate:(id<UITextInputPayloadDelegate>)arg1 ;
@end

