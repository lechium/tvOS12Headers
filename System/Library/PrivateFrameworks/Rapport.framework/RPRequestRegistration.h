/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:05:21 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/Rapport.framework/Rapport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSDictionary;

@interface RPRequestRegistration : NSObject {

	NSString* _requestID;
	NSDictionary* _options;
	/*^block*/id _handler;

}

@property (nonatomic,copy) NSString * requestID;                //@synthesize requestID=_requestID - In the implementation block
@property (nonatomic,copy) NSDictionary * options;              //@synthesize options=_options - In the implementation block
@property (nonatomic,copy) id handler;                          //@synthesize handler=_handler - In the implementation block
-(NSString *)requestID;
-(void)setRequestID:(NSString *)arg1 ;
-(id)handler;
-(void)setHandler:(id)arg1 ;
-(NSDictionary *)options;
-(void)setOptions:(NSDictionary *)arg1 ;
@end

