/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:03:43 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/AppleAccountUI.framework/AppleAccountUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppleAccount/AAResponse.h>

@class NSDictionary, NSArray, NSNumber, NSString, NSURL;

@interface AAUIQuotaResponse : AAResponse {

	NSDictionary* _quotaInfo;
	NSArray* _usage;
	NSDictionary* _endPoints;
	NSDictionary* _storageInfo;
	NSDictionary* _storageMeterLabel;

}

@property (nonatomic,readonly) NSNumber * availableStorageInBytes; 
@property (nonatomic,readonly) NSNumber * usedStorageInBytes; 
@property (nonatomic,readonly) NSNumber * totalStorageInBytes; 
@property (nonatomic,readonly) NSArray * usage; 
@property (nonatomic,readonly) NSArray * iCloudMediaUsage; 
@property (nonatomic,readonly) BOOL hasMaxTier; 
@property (nonatomic,readonly) NSString * displayLabel; 
@property (nonatomic,readonly) NSURL * manageStorageURL; 
@property (nonatomic,readonly) NSNumber * totalStorageInByes; 
-(NSString *)displayLabel;
-(NSArray *)usage;
-(id)initWithHTTPResponse:(id)arg1 data:(id)arg2 ;
-(NSNumber *)totalStorageInBytes;
-(NSArray *)iCloudMediaUsage;
-(NSNumber *)totalStorageInByes;
-(NSNumber *)usedStorageInBytes;
-(NSNumber *)availableStorageInBytes;
-(BOOL)hasMaxTier;
-(NSURL *)manageStorageURL;
@end
