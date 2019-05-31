/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:05:50 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKitDaemon/CKDOperation.h>

@class NSString;

@interface CKDSaveUserPrivacySettingsOperation : CKDOperation {

	long long _discoverable;
	NSString* _applicationBundleID;

}

@property (assign,nonatomic) long long discoverable;                    //@synthesize discoverable=_discoverable - In the implementation block
@property (nonatomic,copy) NSString * applicationBundleID;              //@synthesize applicationBundleID=_applicationBundleID - In the implementation block
+(long long)isPredominatelyDownload;
-(NSString *)applicationBundleID;
-(id)initWithOperationInfo:(id)arg1 clientContext:(id)arg2 ;
-(long long)discoverable;
-(void)setDiscoverable:(long long)arg1 ;
-(id)activityCreate;
-(BOOL)shouldCheckAppVersion;
-(void)setApplicationBundleID:(NSString *)arg1 ;
-(void)main;
@end
