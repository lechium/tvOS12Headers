/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:04:19 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString, NSArray, NSURL;


@protocol WLKInstallable <NSObject>
@property (nonatomic,copy,readonly) NSString * name; 
@property (nonatomic,copy,readonly) NSArray * appBundleIDs; 
@property (nonatomic,copy,readonly) NSArray * appAdamIDs; 
@property (nonatomic,copy,readonly) NSURL * appStoreURL; 
@required
-(NSURL *)appStoreURL;
-(NSArray *)appAdamIDs;
-(NSArray *)appBundleIDs;
-(id)appIconURLForSize:(CGSize)arg1;
-(NSString *)name;

@end
