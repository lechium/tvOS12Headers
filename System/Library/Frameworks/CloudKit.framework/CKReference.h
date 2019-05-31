/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:59:31 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKit/CloudKit-Structs.h>
#import <libobjc.A.dylib/CKRecordValue.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class CKRecordID, NSString;

@interface CKReference : NSObject <CKRecordValue, NSSecureCoding, NSCopying> {

	unsigned long long _referenceAction;
	CKRecordID* _recordID;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) CKRecordID * recordID;                               //@synthesize recordID=_recordID - In the implementation block
@property (nonatomic,readonly) unsigned long long referenceAction;              //@synthesize referenceAction=_referenceAction - In the implementation block
+(unsigned long long)ckReferenceActionForCKDPRecordReferenceType:(int)arg1 ;
+(int)ckdpReferenceTypeForCKReferenceAction:(unsigned long long)arg1 ;
+(BOOL)supportsSecureCoding;
-(id)initWithRecord:(id)arg1 action:(unsigned long long)arg2 ;
-(id)CKPropertiesDescription;
-(id)CKDescriptionPropertiesWithPublic:(BOOL)arg1 private:(BOOL)arg2 shouldExpand:(BOOL)arg3 ;
-(id)ckShortDescription;
-(id)_initBare;
-(id)initWithRecordID:(id)arg1 action:(unsigned long long)arg2 ;
-(unsigned long long)referenceAction;
-(CKRecordID *)recordID;
-(void)setRecordID:(CKRecordID *)arg1 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(NSString *)debugDescription;
-(id)copyWithZone:(NSZone*)arg1 ;
@end
