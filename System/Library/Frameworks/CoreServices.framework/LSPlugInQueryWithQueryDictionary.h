/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:06:50 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/CoreServices.framework/CoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreServices/CoreServices-Structs.h>
#import <CoreServices/LSPlugInQuery.h>

@class NSDictionary, NSArray;

@interface LSPlugInQueryWithQueryDictionary : LSPlugInQuery {

	NSDictionary* _queryDict;
	NSArray* _extensionIdentifiers;
	NSArray* _extensionPointIdentifiers;
	/*^block*/id _filterBlock;

}
+(BOOL)supportsSecureCoding;
-(BOOL)matchesPlugin:(const LSPluginData*)arg1 withDatabase:(LSDatabase*)arg2 ;
-(id)_queryDictionary;
-(id)_initWithQueryDictionary:(id)arg1 applyFilter:(/*^block*/id)arg2 ;
-(void)_enumerateWithXPCConnection:(id)arg1 block:(/*^block*/id)arg2 ;
-(BOOL)_shouldCacheResolvedResults;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)hash;
@end
