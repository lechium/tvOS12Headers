/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:05:02 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/AssistantUI.framework/AssistantUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class AFUIRequestOptions;

@interface AFUITestInput : NSObject {

	AFUIRequestOptions* _requestOptions;

}

@property (nonatomic,readonly) AFUIRequestOptions * requestOptions;              //@synthesize requestOptions=_requestOptions - In the implementation block
+(id)_baseRequestOptions;
-(AFUIRequestOptions *)requestOptions;
-(id)_initWithRequestOptions:(id)arg1 ;
-(id)initWithRecordedSpeechURL:(id)arg1 ;
-(id)initWithText:(id)arg1 ;
@end

