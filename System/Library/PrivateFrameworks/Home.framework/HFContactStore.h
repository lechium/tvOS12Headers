/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:04:35 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CNContactStore;

@interface HFContactStore : NSObject {

	CNContactStore* _contactStore;

}

@property (nonatomic,readonly) CNContactStore * contactStore;              //@synthesize contactStore=_contactStore - In the implementation block
@property (nonatomic,readonly) CNContactStore * backingStore; 
+(id)defaultStore;
-(CNContactStore *)contactStore;
-(id)_meContactWithEmailAddress:(id)arg1 keys:(id)arg2 ;
-(id)contactForEmailAddress:(id)arg1 withKeys:(id)arg2 ;
-(id)_fallbackContactWithEmailAddress:(id)arg1 phoneNumber:(id)arg2 ;
-(id)contactForUserHandle:(id)arg1 withKeys:(id)arg2 ;
-(id)contactForPhoneNumber:(id)arg1 withKeys:(id)arg2 ;
-(CNContactStore *)backingStore;
-(id)init;
@end

