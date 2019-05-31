/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:01:21 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface PSQuotaInfo : NSObject {

	NSMutableDictionary* _mediaKindDict;
	unsigned long long _totalStorage;
	unsigned long long _usedStorage;

}

@property (assign,nonatomic) unsigned long long totalStorage;              //@synthesize totalStorage=_totalStorage - In the implementation block
@property (assign,nonatomic) unsigned long long usedStorage;               //@synthesize usedStorage=_usedStorage - In the implementation block
-(unsigned long long)storageInUseForMediaKind:(long long)arg1 ;
-(unsigned long long)totalStorage;
-(unsigned long long)usedStorage;
-(void)setStorageInUse:(unsigned long long)arg1 forMediaKind:(long long)arg2 ;
-(void)setTotalStorage:(unsigned long long)arg1 ;
-(void)setUsedStorage:(unsigned long long)arg1 ;
-(id)init;
@end

