/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:02:48 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class MFMessageCriterion, NSIndexSet;

@interface _MFLibrarySearchableIndexResultKey : NSObject {

	MFMessageCriterion* _criterion;
	NSIndexSet* _mailboxIDs;

}

@property (nonatomic,retain) MFMessageCriterion * criterion;              //@synthesize criterion=_criterion - In the implementation block
@property (nonatomic,copy) NSIndexSet * mailboxIDs;                       //@synthesize mailboxIDs=_mailboxIDs - In the implementation block
-(MFMessageCriterion *)criterion;
-(void)setCriterion:(MFMessageCriterion *)arg1 ;
-(NSIndexSet *)mailboxIDs;
-(void)setMailboxIDs:(NSIndexSet *)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
@end

