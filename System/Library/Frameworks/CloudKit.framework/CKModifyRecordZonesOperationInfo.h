/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:59:29 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKit/CKDatabaseOperationInfo.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray;

@interface CKModifyRecordZonesOperationInfo : CKDatabaseOperationInfo <NSSecureCoding> {

	BOOL _allowDefaultZoneSave;
	BOOL _markZonesAsUserPurged;
	BOOL _dontFetchFromServer;
	NSArray* _recordZonesToSave;
	NSArray* _recordZoneIDsToDelete;
	long long _maxZoneSaveAttempts;

}

@property (nonatomic,retain) NSArray * recordZonesToSave;                  //@synthesize recordZonesToSave=_recordZonesToSave - In the implementation block
@property (nonatomic,retain) NSArray * recordZoneIDsToDelete;              //@synthesize recordZoneIDsToDelete=_recordZoneIDsToDelete - In the implementation block
@property (assign,nonatomic) BOOL allowDefaultZoneSave;                    //@synthesize allowDefaultZoneSave=_allowDefaultZoneSave - In the implementation block
@property (assign,nonatomic) BOOL markZonesAsUserPurged;                   //@synthesize markZonesAsUserPurged=_markZonesAsUserPurged - In the implementation block
@property (assign,nonatomic) long long maxZoneSaveAttempts;                //@synthesize maxZoneSaveAttempts=_maxZoneSaveAttempts - In the implementation block
@property (assign,nonatomic) BOOL dontFetchFromServer;                     //@synthesize dontFetchFromServer=_dontFetchFromServer - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setRecordZonesToSave:(NSArray *)arg1 ;
-(void)setAllowDefaultZoneSave:(BOOL)arg1 ;
-(void)setMaxZoneSaveAttempts:(long long)arg1 ;
-(void)setDontFetchFromServer:(BOOL)arg1 ;
-(NSArray *)recordZonesToSave;
-(NSArray *)recordZoneIDsToDelete;
-(BOOL)allowDefaultZoneSave;
-(BOOL)markZonesAsUserPurged;
-(long long)maxZoneSaveAttempts;
-(BOOL)dontFetchFromServer;
-(void)setMarkZonesAsUserPurged:(BOOL)arg1 ;
-(void)setRecordZoneIDsToDelete:(NSArray *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
@end
