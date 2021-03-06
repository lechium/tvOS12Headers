/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:02:22 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/IKDataSourceElementImplementing.h>

@class IKDataSourceElement, NSArray, IKElementChangeSet, IKAppDataSet, NSDictionary, NSMutableIndexSet, NSMutableDictionary, NSString;

@interface IKDSEBoundItemsImpl : NSObject <IKDataSourceElementImplementing> {

	BOOL _visibleIndexRangeIsDirty;
	IKDataSourceElement* _dataSourceElement;
	NSArray* _prototypes;
	IKElementChangeSet* _itemsChangeset;
	IKAppDataSet* _dataSet;
	NSDictionary* _usedPrototypeMappingsByType;
	NSDictionary* _childrenByItemID;
	NSMutableIndexSet* _visibleIndexSet;
	NSMutableDictionary* _proxyChildrenByItemID;

}

@property (nonatomic,retain) NSArray * prototypes;                                          //@synthesize prototypes=_prototypes - In the implementation block
@property (nonatomic,retain) IKElementChangeSet * itemsChangeset;                           //@synthesize itemsChangeset=_itemsChangeset - In the implementation block
@property (nonatomic,retain) IKAppDataSet * dataSet;                                        //@synthesize dataSet=_dataSet - In the implementation block
@property (nonatomic,copy) NSDictionary * usedPrototypeMappingsByType;                      //@synthesize usedPrototypeMappingsByType=_usedPrototypeMappingsByType - In the implementation block
@property (nonatomic,copy) NSDictionary * childrenByItemID;                                 //@synthesize childrenByItemID=_childrenByItemID - In the implementation block
@property (nonatomic,retain) NSMutableIndexSet * visibleIndexSet;                           //@synthesize visibleIndexSet=_visibleIndexSet - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * proxyChildrenByItemID;                   //@synthesize proxyChildrenByItemID=_proxyChildrenByItemID - In the implementation block
@property (nonatomic,__weak,readonly) IKDataSourceElement * dataSourceElement;              //@synthesize dataSourceElement=_dataSourceElement - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_prototypeMappingForDataItem:(id)arg1 inDictionary:(id)arg2 ;
+(void)_traversePrototypeMappings:(id)arg1 withBlock:(/*^block*/id)arg2 ;
-(void)setDataSet:(IKAppDataSet *)arg1 ;
-(IKAppDataSet *)dataSet;
-(id)initWithDataSourceElement:(id)arg1 ;
-(void)initializeWithElementFactory:(id)arg1 ;
-(void)configureUpdatesWithImplementation:(id)arg1 ;
-(void)applyUpdatesWithImplementation:(id)arg1 usingUpdater:(/*^block*/id)arg2 ;
-(long long)indexOfItemForChildElement:(id)arg1 ;
-(void)resetUpdates;
-(id)actualElementForProxyElement:(id)arg1 ;
-(void)updateStylesUsingUpdater:(/*^block*/id)arg1 ;
-(IKDataSourceElement *)dataSourceElement;
-(void)setItemsChangeset:(IKElementChangeSet *)arg1 ;
-(NSDictionary *)usedPrototypeMappingsByType;
-(NSDictionary *)childrenByItemID;
-(NSMutableDictionary *)proxyChildrenByItemID;
-(void)setProxyChildrenByItemID:(NSMutableDictionary *)arg1 ;
-(void)_appendVisibleIndexSetWithIndex:(long long)arg1 ;
-(NSMutableIndexSet *)visibleIndexSet;
-(void)setUsedPrototypeMappingsByType:(NSDictionary *)arg1 ;
-(void)setChildrenByItemID:(NSDictionary *)arg1 ;
-(void)setPrototypes:(NSArray *)arg1 ;
-(void)setVisibleIndexSet:(NSMutableIndexSet *)arg1 ;
-(id)prototypeForItemAtIndex:(long long)arg1 ;
-(id)elementForItemAtIndex:(long long)arg1 ;
-(void)loadIndex:(long long)arg1 ;
-(void)unloadIndex:(long long)arg1 ;
-(IKElementChangeSet *)itemsChangeset;
-(NSArray *)prototypes;
-(void)teardown;
-(long long)numberOfItems;
@end

