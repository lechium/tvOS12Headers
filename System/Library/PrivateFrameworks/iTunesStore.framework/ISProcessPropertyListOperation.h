/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:01:17 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStore/ISOperation.h>

@class ISPropertyListProvider, NSDictionary;

@interface ISProcessPropertyListOperation : ISOperation {

	ISPropertyListProvider* _dataProvider;
	NSDictionary* _propertyList;

}

@property (retain) ISPropertyListProvider * dataProvider;              //@synthesize dataProvider=_dataProvider - In the implementation block
-(id)initWithPropertyList:(id)arg1 ;
-(void)dealloc;
-(void)run;
-(void)setDataProvider:(ISPropertyListProvider *)arg1 ;
-(ISPropertyListProvider *)dataProvider;
@end

