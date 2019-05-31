/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:03:50 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/Stocks.framework/Stocks
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SCKDatabaseStoreCoordinator
@property (nonatomic,readonly) id<SCKDatabaseStore> underlyingStore; 
@required
-(void)readWithAccessor:(/*^block*/id)arg1;
-(void)writeWithAccessor:(/*^block*/id)arg1;
-(void)reloadWithAccessor:(/*^block*/id)arg1;
-(void)readZone:(id)arg1 withAccessor:(/*^block*/id)arg2;
-(void)writeZone:(id)arg1 withAccessor:(/*^block*/id)arg2;
-(id<SCKDatabaseStore>)underlyingStore;
-(void)removeObserver:(id)arg1;
-(void)addObserver:(id)arg1;

@end

