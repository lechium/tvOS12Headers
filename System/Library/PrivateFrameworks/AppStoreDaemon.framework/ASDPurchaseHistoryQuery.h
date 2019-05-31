/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:03:28 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/AppStoreDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSArray;

@interface ASDPurchaseHistoryQuery : NSObject <NSSecureCoding> {

	long long _accountID;
	long long _isFirstParty;
	long long _isHidden;
	long long _isPreorder;
	NSString* _searchTerm;
	NSArray* _sortOptions;
	NSArray* _storeIDs;

}

@property (assign) long long accountID;                 //@synthesize accountID=_accountID - In the implementation block
@property (assign) long long isFirstParty;              //@synthesize isFirstParty=_isFirstParty - In the implementation block
@property (assign) long long isHidden;                  //@synthesize isHidden=_isHidden - In the implementation block
@property (assign) long long isPreorder;                //@synthesize isPreorder=_isPreorder - In the implementation block
@property (copy) NSString * searchTerm;                 //@synthesize searchTerm=_searchTerm - In the implementation block
@property (copy) NSArray * sortOptions;                 //@synthesize sortOptions=_sortOptions - In the implementation block
@property (copy) NSArray * storeIDs;                    //@synthesize storeIDs=_storeIDs - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setIsHidden:(long long)arg1 ;
-(NSString *)searchTerm;
-(void)setSearchTerm:(NSString *)arg1 ;
-(long long)isPreorder;
-(void)setStoreIDs:(NSArray *)arg1 ;
-(NSArray *)storeIDs;
-(long long)accountID;
-(void)setAccountID:(long long)arg1 ;
-(void)setIsFirstParty:(long long)arg1 ;
-(void)setIsPreorder:(long long)arg1 ;
-(NSArray *)sortOptions;
-(void)setSortOptions:(NSArray *)arg1 ;
-(long long)isFirstParty;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)isHidden;
@end

