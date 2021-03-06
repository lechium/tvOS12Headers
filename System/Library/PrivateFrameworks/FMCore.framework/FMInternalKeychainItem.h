/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:04:34 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/FMCore.framework/FMCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FMCore/FMKeychainItem.h>

@class NSString, NSDate, NSData;

@interface FMInternalKeychainItem : NSObject <FMKeychainItem> {

	NSString* _password;
	NSDate* _lastModifyDate;
	NSDate* _creationDate;
	NSData* _rawData;

}

@property (nonatomic,retain) NSString * password;                   //@synthesize password=_password - In the implementation block
@property (nonatomic,retain) NSDate * lastModifyDate;               //@synthesize lastModifyDate=_lastModifyDate - In the implementation block
@property (nonatomic,retain) NSDate * creationDate;                 //@synthesize creationDate=_creationDate - In the implementation block
@property (nonatomic,retain) NSData * rawData;                      //@synthesize rawData=_rawData - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setCreationDate:(NSDate *)arg1 ;
-(NSDate *)creationDate;
-(id)initWithResults:(id)arg1 ;
-(void)setRawData:(NSData *)arg1 ;
-(void)setLastModifyDate:(NSDate *)arg1 ;
-(NSDate *)lastModifyDate;
-(void)setPassword:(NSString *)arg1 ;
-(NSString *)password;
-(NSData *)rawData;
@end

