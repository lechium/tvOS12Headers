/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:57:29 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/CoreData-Structs.h>
#import <CoreData/NSKnownKeysMappingStrategy.h>

@interface NSKnownKeysMappingStrategy1 : NSKnownKeysMappingStrategy {

	int _cd_rc;
	int _reserved64;
	void* _table;
	unsigned long long _length;
	id _reserved1;
	id* _keys;

}
+(BOOL)accessInstanceVariablesDirectly;
+(id)alloc;
+(BOOL)supportsSecureCoding;
+(id)allocWithZone:(NSZone*)arg1 ;
+(void)initialize;
-(Class)classForArchiver;
-(id)initForKeys:(id*)arg1 count:(unsigned long long)arg2 ;
-(CFArrayRef)_makeBranchTableForKeys:(const char**)arg1 count:(unsigned long long)arg2 ;
-(void)_coreCreationForKeys:(const id*)arg1 count:(unsigned long long)arg2 ;
-(void)_coreDealloc:(BOOL)arg1 ;
-(id)initForKeys:(id)arg1 ;
-(unsigned long long)indexForKey:(id)arg1 ;
-(unsigned long long)fastIndexForKnownKey:(id)arg1 ;
-(unsigned long long)length;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_NS2*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(oneway void)release;
-(id)retain;
-(unsigned long long)retainCount;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)allKeys;
-(BOOL)_isDeallocating;
-(BOOL)_tryRetain;
-(Class)classForCoder;
-(id*)keys;
@end

