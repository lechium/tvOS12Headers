/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:03:06 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/PKPassLibraryDelegate.h>

@protocol PKGroupsControllerDelegate;
@class PKPassLibrary, PKPaymentService, NSMutableArray, NSMutableDictionary, PKCatalog, NSArray, NSSet, NSString;

@interface PKGroupsController : NSObject <PKPassLibraryDelegate> {

	PKPassLibrary* _passLibrary;
	PKPaymentService* _paymentService;
	unsigned long long _filters;
	unsigned long long _passTypeMask;
	NSMutableArray* _groups;
	NSMutableDictionary* _passesByUniqueID;
	NSMutableDictionary* _groupsByGroupID;
	NSMutableDictionary* _indicesByGroupID;
	NSMutableDictionary* _groupIDsByPassUniqueID;
	BOOL _suppressRemoteUpdates;
	BOOL _enqueueRemoteUpdates;
	PKCatalog* _catalogBeforeReordering;
	NSMutableArray* _enqueuedUpdates;
	NSArray* _localPasses;
	NSSet* _expressPassesInformation;
	BOOL _limitedMode;
	BOOL _activePassesOnly;
	int _expressPassesInformationToken;
	BOOL _reorderingEnabled;
	BOOL _shouldSeparatePaymentPasses;
	id<PKGroupsControllerDelegate> _delegate;
	NSArray* _filteredPassUniqueIDs;

}

@property (assign,nonatomic,__weak) id<PKGroupsControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL reorderingEnabled;                                      //@synthesize reorderingEnabled=_reorderingEnabled - In the implementation block
@property (nonatomic,readonly) BOOL filteringEnabled; 
@property (nonatomic,readonly) NSArray * filteredPassUniqueIDs;                           //@synthesize filteredPassUniqueIDs=_filteredPassUniqueIDs - In the implementation block
@property (assign,nonatomic) BOOL shouldSeparatePaymentPasses;                            //@synthesize shouldSeparatePaymentPasses=_shouldSeparatePaymentPasses - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)filteringEnabled;
-(unsigned long long)groupCount;
-(id)passWithUniqueID:(id)arg1 ;
-(void)passLibrary:(id)arg1 receivedUpdatedCatalog:(id)arg2 passes:(id)arg3 ;
-(void)handleUserPassDelete:(id)arg1 ;
-(id)initWithPassLibrary:(id)arg1 ;
-(void)objectSettingsDidChangeNotification:(id)arg1 ;
-(void)reloadGroups;
-(void)loadGroupsSynchronously;
-(void)_updateStateWithCatalog:(id)arg1 passes:(id)arg2 notify:(BOOL)arg3 ;
-(void)_getPassesAndCatalogSynchronously:(BOOL)arg1 withHandler:(/*^block*/id)arg2 ;
-(void)reloadGroupsWithCompletion:(/*^block*/id)arg1 ;
-(unsigned long long)_indexOfGroupID:(id)arg1 ;
-(unsigned long long)groupIndexForPassUniqueID:(id)arg1 ;
-(void)_removeGroup:(id)arg1 notify:(BOOL)arg2 ;
-(id)_copyRemoteCatalog;
-(void)_moveGroup:(id)arg1 fromIndex:(unsigned long long)arg2 toIndex:(unsigned long long)arg3 notify:(BOOL)arg4 ;
-(void)_performEnqueuedUpdates;
-(void)_insertGroup:(id)arg1 atIndex:(unsigned long long)arg2 notify:(BOOL)arg3 ;
-(void)reloadGroupsAndNotify:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)_performOrEnqueueUpdate:(/*^block*/id)arg1 ;
-(void)_fixIndex:(unsigned long long)arg1 ;
-(id)_displayablePassesDictionaryFromSet:(id)arg1 ;
-(void)_insertLocalGroupsIntoCatalog:(id)arg1 withPassesByUniqueID:(id)arg2 ;
-(id)_updateAndCreateGroupsWithCatalog:(id)arg1 passesByUniqueID:(id)arg2 notify:(BOOL)arg3 ;
-(BOOL)_groupIDIsNew:(id)arg1 ;
-(void)_placeGroup:(id)arg1 atIndex:(unsigned long long)arg2 notify:(BOOL)arg3 ;
-(unsigned long long)_destinationIndexForGroupID:(id)arg1 catalogGroups:(id)arg2 skippingNewGroupsAfterIndex:(unsigned long long)arg3 ;
-(unsigned long long)indexOfGroup:(id)arg1 ;
-(void)_fixIndicesFrom:(unsigned long long)arg1 ;
-(void)_fixIndicesFrom:(unsigned long long)arg1 through:(unsigned long long)arg2 ;
-(id)_groupsExcludingTypePayment;
-(id)initWithPassTypeMask:(unsigned long long)arg1 passFilters:(unsigned long long)arg2 ;
-(id)initLimited;
-(void)preloadGroupsAndFrontFaceImages;
-(void)loadGroupsWithCompletion:(/*^block*/id)arg1 ;
-(unsigned long long)indexOfSeparationGroup;
-(void)handleUserPassesDelete:(id)arg1 ;
-(void)suppressRemoteUpdates:(BOOL)arg1 ;
-(void)moveGroupAtIndex:(unsigned long long)arg1 toIndex:(unsigned long long)arg2 ;
-(void)enableRemoteUpdates;
-(void)addLocalPasses:(id)arg1 ;
-(BOOL)reorderingEnabled;
-(void)setReorderingEnabled:(BOOL)arg1 ;
-(NSArray *)filteredPassUniqueIDs;
-(BOOL)shouldSeparatePaymentPasses;
-(void)setShouldSeparatePaymentPasses:(BOOL)arg1 ;
-(id)init;
-(void)dealloc;
-(void)setDelegate:(id<PKGroupsControllerDelegate>)arg1 ;
-(id<PKGroupsControllerDelegate>)delegate;
-(id)groups;
-(id)groupAtIndex:(unsigned long long)arg1 ;
@end

