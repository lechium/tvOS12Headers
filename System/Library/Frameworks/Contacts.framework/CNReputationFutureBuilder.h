/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:59:43 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CNReputationHandle, CNReputationCoreRecentsAdapter, CNReputationContactsAdapter, CNReputationLogger, CNFuture;

@interface CNReputationFutureBuilder : NSObject {

	CNReputationHandle* _handle;
	CNReputationCoreRecentsAdapter* _coreRecentsAdapter;
	CNReputationContactsAdapter* _contactsAdapter;
	CNReputationLogger* _logger;
	CNFuture* _scoreFuture;

}

@property (nonatomic,copy,readonly) CNReputationHandle * handle;                                 //@synthesize handle=_handle - In the implementation block
@property (nonatomic,readonly) CNReputationCoreRecentsAdapter * coreRecentsAdapter;              //@synthesize coreRecentsAdapter=_coreRecentsAdapter - In the implementation block
@property (nonatomic,readonly) CNReputationContactsAdapter * contactsAdapter;                    //@synthesize contactsAdapter=_contactsAdapter - In the implementation block
@property (nonatomic,readonly) CNReputationLogger * logger;                                      //@synthesize logger=_logger - In the implementation block
@property (nonatomic,retain) CNFuture * scoreFuture;                                             //@synthesize scoreFuture=_scoreFuture - In the implementation block
-(id)build;
-(CNReputationHandle *)handle;
-(CNReputationCoreRecentsAdapter *)coreRecentsAdapter;
-(CNReputationContactsAdapter *)contactsAdapter;
-(id)initWithHandle:(id)arg1 coreRecentsAdapter:(id)arg2 contactsAdapter:(id)arg3 logger:(id)arg4 ;
-(CNFuture *)scoreFuture;
-(id)coreRecentsTrustForHandle:(id)arg1 ;
-(void)setScoreFuture:(CNFuture *)arg1 ;
-(id)contactsTrustForEmailAddress:(id)arg1 ;
-(id)contactsTrustForPhoneNumber:(id)arg1 ;
-(void)addCoreRecentsTrust;
-(void)addContactsTrustForEmailAddress;
-(void)addContactsTrustForPhoneNumber;
-(CNReputationLogger *)logger;
@end

