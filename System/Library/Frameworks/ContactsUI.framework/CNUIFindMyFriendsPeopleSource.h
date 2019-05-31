/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:01:40 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CNUIPeopleSource.h>

@class CNUIFMFFacade, CNContactStore, NSArray, NSString;

@interface CNUIFindMyFriendsPeopleSource : NSObject <CNUIPeopleSource> {

	BOOL _fetching;
	CNUIFMFFacade* _fmfFacade;
	CNContactStore* _contactStore;
	NSArray* _fmfHandles;
	NSArray* _cachedPeople;

}

@property (nonatomic,retain) CNUIFMFFacade * fmfFacade;                  //@synthesize fmfFacade=_fmfFacade - In the implementation block
@property (nonatomic,retain) CNContactStore * contactStore;              //@synthesize contactStore=_contactStore - In the implementation block
@property (nonatomic,retain) NSArray * fmfHandles;                       //@synthesize fmfHandles=_fmfHandles - In the implementation block
@property (nonatomic,retain) NSArray * cachedPeople;                     //@synthesize cachedPeople=_cachedPeople - In the implementation block
@property (assign,nonatomic) BOOL fetching;                              //@synthesize fetching=_fetching - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sourceKind;
+(id)sourceWithEnvironment:(id)arg1 contactStore:(id)arg2 ;
-(NSArray *)cachedPeople;
-(void)setCachedPeople:(NSArray *)arg1 ;
-(id)peopleInGroup:(id)arg1 keysToFetch:(id)arg2 ;
-(CNUIFMFFacade *)fmfFacade;
-(void)setFmfFacade:(CNUIFMFFacade *)arg1 ;
-(NSArray *)fmfHandles;
-(void)fetchFriends;
-(/*^block*/id)friendContactFromFriendHandleTransformWithKeysToFetch:(id)arg1 ;
-(BOOL)fetching;
-(void)setFetching:(BOOL)arg1 ;
-(void)setFmfHandles:(NSArray *)arg1 ;
-(CNContactStore *)contactStore;
-(void)setContactStore:(CNContactStore *)arg1 ;
-(id)groups;
@end

