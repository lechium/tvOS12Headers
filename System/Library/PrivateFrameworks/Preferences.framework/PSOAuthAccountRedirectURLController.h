/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:01:19 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMapTable;

@interface PSOAuthAccountRedirectURLController : NSObject {

	NSMapTable* _redirectHandlerMap;

}

@property (nonatomic,retain) NSMapTable * redirectHandlerMap;              //@synthesize redirectHandlerMap=_redirectHandlerMap - In the implementation block
+(id)sharedInstance;
-(void)setRedirectHandlerMap:(NSMapTable *)arg1 ;
-(NSMapTable *)redirectHandlerMap;
-(id)_redirectURLFromURL:(id)arg1 ;
-(void)registerOAuthClientForRedirectURL:(id)arg1 redirectHandler:(/*^block*/id)arg2 ;
-(void)unRegisterOAuthClientForRedirectURL:(id)arg1 ;
-(BOOL)handleOAuthRedirectURL:(id)arg1 ;
-(id)init;
@end

