/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:59:42 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CNiOSPersonFetchRequest, CNContactsEnvironment;

@interface CNiOSPersonFetcher : NSObject {

	CNiOSPersonFetchRequest* _fetchRequest;
	void* _addressBook;
	CNContactsEnvironment* _environment;

}

@property (nonatomic,readonly) CNiOSPersonFetchRequest * fetchRequest;              //@synthesize fetchRequest=_fetchRequest - In the implementation block
@property (nonatomic,readonly) void* addressBook;                                   //@synthesize addressBook=_addressBook - In the implementation block
@property (nonatomic,readonly) CNContactsEnvironment * environment;                 //@synthesize environment=_environment - In the implementation block
+(id)peopleForFetchRequest:(id)arg1 matchInfos:(id*)arg2 inAddressBook:(void*)arg3 environment:(id)arg4 error:(id*)arg5 ;
-(id)initWithAddressBook:(void*)arg1 fetchRequest:(id)arg2 environment:(id)arg3 ;
-(id)fetchPeopleReturningMatchInfos:(id*)arg1 error:(id*)arg2 ;
-(id)fetchPeopleUsingNativeSortReturningMatchInfos:(id*)arg1 error:(id*)arg2 ;
-(BOOL)shouldSortInMemory;
-(id)sortPeople:(id)arg1 ;
-(id)executeFetchRequestWithProgressiveResults:(/*^block*/id)arg1 completion:(/*^block*/id)arg2 ;
-(CNiOSPersonFetchRequest *)fetchRequest;
-(void*)addressBook;
-(void)dealloc;
-(CNContactsEnvironment *)environment;
@end

