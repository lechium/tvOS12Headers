/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:03:27 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/MobileBackup.framework/MobileBackup
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileBackup/MBContainer.h>

@class NSString, NSDictionary, NSArray;

@interface MBAppPlugin : MBContainer

@property (nonatomic,readonly) NSString * bundleDir; 
@property (nonatomic,readonly) NSString * ownerBundleID; 
@property (nonatomic,readonly) NSDictionary * entitlements; 
@property (nonatomic,readonly) NSString * entitlementsRelativePath; 
@property (nonatomic,readonly) NSArray * groups; 
+(id)appPluginWithPropertyList:(id)arg1 ;
-(NSDictionary *)entitlements;
-(NSString *)bundleDir;
-(NSString *)entitlementsRelativePath;
-(NSString *)ownerBundleID;
-(NSArray *)groups;
-(id)domain;
@end

