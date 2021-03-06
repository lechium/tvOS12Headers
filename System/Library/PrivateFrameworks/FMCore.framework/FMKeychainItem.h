/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:04:34 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/FMCore.framework/FMCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString, NSDate, NSData;


@protocol FMKeychainItem <NSObject>
@property (nonatomic,readonly) NSString * password; 
@property (nonatomic,readonly) NSDate * lastModifyDate; 
@property (nonatomic,readonly) NSDate * creationDate; 
@property (nonatomic,readonly) NSData * rawData; 
@required
-(NSDate *)creationDate;
-(NSDate *)lastModifyDate;
-(NSString *)password;
-(NSData *)rawData;

@end

