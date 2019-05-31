/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:59:31 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKit/CloudKit-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class CKUserIdentity, NSString, CKRecordID, NSData;

@interface CKShareParticipant : NSObject <NSSecureCoding, NSCopying> {

	BOOL _isCurrentUser;
	BOOL _isOrgAdminUser;
	BOOL _createdInProcess;
	BOOL _acceptedInProcess;
	CKUserIdentity* _userIdentity;
	long long _role;
	long long _acceptanceStatus;
	long long _permission;
	NSString* _participantID;
	CKRecordID* _shareRecordID;
	NSString* _inviterID;
	long long _originalParticipantRole;
	long long _originalAcceptanceStatus;
	long long _originalPermission;
	NSData* _protectionInfo;
	NSData* _encryptedPersonalInfo;

}

@property (nonatomic,retain) CKUserIdentity * userIdentity;                   //@synthesize userIdentity=_userIdentity - In the implementation block
@property (nonatomic,retain) NSString * participantID;                        //@synthesize participantID=_participantID - In the implementation block
@property (nonatomic,retain) CKRecordID * shareRecordID;                      //@synthesize shareRecordID=_shareRecordID - In the implementation block
@property (assign,nonatomic) BOOL isCurrentUser;                              //@synthesize isCurrentUser=_isCurrentUser - In the implementation block
@property (assign,nonatomic) BOOL isOrgAdminUser;                             //@synthesize isOrgAdminUser=_isOrgAdminUser - In the implementation block
@property (nonatomic,retain) NSString * inviterID;                            //@synthesize inviterID=_inviterID - In the implementation block
@property (assign,nonatomic) long long acceptanceStatus;                      //@synthesize acceptanceStatus=_acceptanceStatus - In the implementation block
@property (assign,nonatomic) long long originalParticipantRole;               //@synthesize originalParticipantRole=_originalParticipantRole - In the implementation block
@property (assign,nonatomic) long long originalAcceptanceStatus;              //@synthesize originalAcceptanceStatus=_originalAcceptanceStatus - In the implementation block
@property (assign,nonatomic) long long originalPermission;                    //@synthesize originalPermission=_originalPermission - In the implementation block
@property (assign,nonatomic) BOOL createdInProcess;                           //@synthesize createdInProcess=_createdInProcess - In the implementation block
@property (assign,nonatomic) BOOL acceptedInProcess;                          //@synthesize acceptedInProcess=_acceptedInProcess - In the implementation block
@property (nonatomic,retain) NSData * protectionInfo;                         //@synthesize protectionInfo=_protectionInfo - In the implementation block
@property (nonatomic,retain) NSData * encryptedPersonalInfo;                  //@synthesize encryptedPersonalInfo=_encryptedPersonalInfo - In the implementation block
@property (assign,nonatomic) long long role;                                  //@synthesize role=_role - In the implementation block
@property (assign,nonatomic) long long type; 
@property (assign,nonatomic) long long permission;                            //@synthesize permission=_permission - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)_stripPersonalInfo;
-(long long)originalParticipantRole;
-(void)setOriginalParticipantRole:(long long)arg1 ;
-(long long)originalAcceptanceStatus;
-(void)setOriginalAcceptanceStatus:(long long)arg1 ;
-(long long)originalPermission;
-(void)setOriginalPermission:(long long)arg1 ;
-(BOOL)isCurrentUser;
-(CKUserIdentity *)userIdentity;
-(void)setUserIdentity:(CKUserIdentity *)arg1 ;
-(NSString *)participantID;
-(void)setParticipantID:(NSString *)arg1 ;
-(NSData *)encryptedPersonalInfo;
-(BOOL)createdInProcess;
-(BOOL)acceptedInProcess;
-(void)setEncryptedPersonalInfo:(NSData *)arg1 ;
-(void)setCreatedInProcess:(BOOL)arg1 ;
-(void)setAcceptedInProcess:(BOOL)arg1 ;
-(void)setProtectionInfo:(NSData *)arg1 ;
-(NSData *)protectionInfo;
-(id)CKDescriptionPropertiesWithPublic:(BOOL)arg1 private:(BOOL)arg2 shouldExpand:(BOOL)arg3 ;
-(long long)permission;
-(CKRecordID *)shareRecordID;
-(void)setShareRecordID:(CKRecordID *)arg1 ;
-(id)_initWithUserIdentity:(id)arg1 ;
-(void)setIsOrgAdminUser:(BOOL)arg1 ;
-(void)setIsCurrentUser:(BOOL)arg1 ;
-(void)setPermission:(long long)arg1 ;
-(void)setAcceptanceStatus:(long long)arg1 ;
-(void)setInviterID:(NSString *)arg1 ;
-(NSString *)inviterID;
-(long long)acceptanceStatus;
-(BOOL)isOrgAdminUser;
-(void)setRole:(long long)arg1 ;
-(long long)role;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)debugDescription;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)type;
-(void)setType:(long long)arg1 ;
-(id)_init;
@end

