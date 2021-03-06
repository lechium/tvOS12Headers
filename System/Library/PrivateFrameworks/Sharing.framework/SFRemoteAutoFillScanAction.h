/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:03:48 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSURL;

@interface SFRemoteAutoFillScanAction : NSObject {

	NSString* _message;
	NSString* _title;
	NSURL* _url;

}

@property (nonatomic,copy) NSString * message;              //@synthesize message=_message - In the implementation block
@property (nonatomic,copy) NSString * title;                //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSURL * url;                     //@synthesize url=_url - In the implementation block
+(void)actionForURL:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)performWithCompletion:(/*^block*/id)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(void)setMessage:(NSString *)arg1 ;
-(NSString *)message;
-(NSURL *)url;
-(void)setUrl:(NSURL *)arg1 ;
@end

