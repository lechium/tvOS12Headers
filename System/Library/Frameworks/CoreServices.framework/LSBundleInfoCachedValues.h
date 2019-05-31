/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:06:51 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/CoreServices.framework/CoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreServices/CoreServices-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSSet, NSDictionary;

@interface LSBundleInfoCachedValues : NSObject <NSCopying> {

	NSSet* _keys;
	NSDictionary* _values;

}

@property (nonatomic,readonly) NSSet * allKeys;                       //@synthesize keys=_keys - In the implementation block
@property (nonatomic,readonly) NSDictionary * rawValues;              //@synthesize values=_values - In the implementation block
-(id)URLForKey:(id)arg1 ;
-(id)numberForKey:(id)arg1 ;
-(id)arrayForKey:(id)arg1 ;
-(id)_initWithKeys:(id)arg1 forDictionary:(id)arg2 ;
-(id)objectForKey:(id)arg1 ofType:(Class)arg2 ;
-(id)arrayForKey:(id)arg1 withValuesOfClass:(Class)arg2 ;
-(NSDictionary *)rawValues;
-(id)init;
-(void)dealloc;
-(id)objectForKey:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSSet *)allKeys;
-(BOOL)boolForKey:(id)arg1 ;
-(id)stringForKey:(id)arg1 ;
-(id)dictionaryForKey:(id)arg1 ;
@end

