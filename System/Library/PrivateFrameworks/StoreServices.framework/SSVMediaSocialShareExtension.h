/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:59:49 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class SSXPCConnection, NSString;

@interface SSVMediaSocialShareExtension : NSObject {

	SSXPCConnection* _connection;

}

@property (nonatomic,copy,readonly) NSString * extensionIdentifier; 
-(id)init;
-(NSString *)extensionIdentifier;
-(void)getVisibilityWithCompletionBlock:(/*^block*/id)arg1 ;
@end
