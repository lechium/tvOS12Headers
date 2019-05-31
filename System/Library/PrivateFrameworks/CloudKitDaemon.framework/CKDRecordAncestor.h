/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:05:50 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CKRecordID, CKDRecordPCSData;

@interface CKDRecordAncestor : NSObject {

	CKRecordID* _recordID;
	CKRecordID* _parentID;
	CKDRecordPCSData* _pcsData;

}

@property (nonatomic,retain) CKRecordID * recordID;                   //@synthesize recordID=_recordID - In the implementation block
@property (nonatomic,retain) CKRecordID * parentID;                   //@synthesize parentID=_parentID - In the implementation block
@property (nonatomic,retain) CKDRecordPCSData * pcsData;              //@synthesize pcsData=_pcsData - In the implementation block
-(CKDRecordPCSData *)pcsData;
-(void)setPcsData:(CKDRecordPCSData *)arg1 ;
-(CKRecordID *)parentID;
-(void)setParentID:(CKRecordID *)arg1 ;
-(CKRecordID *)recordID;
-(void)setRecordID:(CKRecordID *)arg1 ;
@end

