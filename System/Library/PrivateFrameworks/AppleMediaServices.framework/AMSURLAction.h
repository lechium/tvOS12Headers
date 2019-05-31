/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:07:13 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSError, NSURL;

@interface AMSURLAction : NSObject {

	long long _actionType;
	NSError* _error;
	NSURL* _redirectURL;

}

@property (assign,nonatomic) long long actionType;              //@synthesize actionType=_actionType - In the implementation block
@property (nonatomic,retain) NSError * error;                   //@synthesize error=_error - In the implementation block
@property (nonatomic,retain) NSURL * redirectURL;               //@synthesize redirectURL=_redirectURL - In the implementation block
+(id)redirectActionWithURL:(id)arg1 ;
+(id)actionWithError:(id)arg1 ;
+(id)retryAction;
-(long long)actionType;
-(void)setActionType:(long long)arg1 ;
-(NSURL *)redirectURL;
-(void)setRedirectURL:(NSURL *)arg1 ;
-(id)description;
-(id)initWithType:(long long)arg1 ;
-(NSError *)error;
-(void)setError:(NSError *)arg1 ;
@end

