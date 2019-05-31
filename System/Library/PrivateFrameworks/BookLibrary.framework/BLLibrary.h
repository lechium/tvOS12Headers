/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:03:33 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/BookLibrary.framework/BookLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class IMLibraryPlist, NSObject;

@interface BLLibrary : NSObject {

	IMLibraryPlist* _booksPlist;
	IMLibraryPlist* _purchasedPlist;
	IMLibraryPlist* _managedPlist;
	IMLibraryPlist* _sharedPlist;
	NSObject*<OS_dispatch_queue> _dispatchQueue;

}

@property (nonatomic,retain) IMLibraryPlist * booksPlist;                             //@synthesize booksPlist=_booksPlist - In the implementation block
@property (nonatomic,retain) IMLibraryPlist * purchasedPlist;                         //@synthesize purchasedPlist=_purchasedPlist - In the implementation block
@property (nonatomic,retain) IMLibraryPlist * managedPlist;                           //@synthesize managedPlist=_managedPlist - In the implementation block
@property (nonatomic,retain) IMLibraryPlist * sharedPlist;                            //@synthesize sharedPlist=_sharedPlist - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> dispatchQueue;              //@synthesize dispatchQueue=_dispatchQueue - In the implementation block
+(id)defaultBookLibrary;
+(void)initialize;
-(BOOL)_isMultiUser;
-(IMLibraryPlist *)sharedPlist;
-(IMLibraryPlist *)purchasedPlist;
-(id)_bookItemsFromPlist:(id)arg1 ;
-(id)_allPlists;
-(id)_list:(id)arg1 testBlock:(/*^block*/id)arg2 ;
-(id)_findBookItemWithTestBlock:(/*^block*/id)arg1 foundWhere:(long long*)arg2 ;
-(id)allBookItems;
-(BOOL)_addBookItemToEduContainer:(id)arg1 error:(id*)arg2 ;
-(BOOL)removeBookFromLibraryWithIdentifier:(id)arg1 error:(id*)arg2 ;
-(BOOL)_removeBookFromLibraryWithPath:(id)arg1 error:(id*)arg2 ;
-(id)bookIdentifierFromURL:(id)arg1 error:(id*)arg2 ;
-(id)_bookItemFromStoreID:(id)arg1 permlink:(id)arg2 error:(id*)arg3 ;
-(id)_bookItemFromPermlink:(id)arg1 error:(id*)arg2 ;
-(BOOL)_isShareableBook:(id)arg1 ;
-(id)_perUserBookURLForBookURL:(id)arg1 ;
-(IMLibraryPlist *)booksPlist;
-(void)setBooksPlist:(IMLibraryPlist *)arg1 ;
-(void)setPurchasedPlist:(IMLibraryPlist *)arg1 ;
-(IMLibraryPlist *)managedPlist;
-(void)setManagedPlist:(IMLibraryPlist *)arg1 ;
-(void)setSharedPlist:(IMLibraryPlist *)arg1 ;
-(void)setDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(id)init;
@end
