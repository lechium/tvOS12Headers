/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:57:02 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreFoundation/CoreFoundation-Structs.h>
#import <CoreFoundation/NSMutableArray.h>

@interface __NSCFArray : NSMutableArray
+(BOOL)automaticallyNotifiesObserversForKey:(id)arg1 ;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_NS27*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(void)addObject:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)count;
-(id)objectAtIndexedSubscript:(unsigned long long)arg1 ;
-(void)removeLastObject;
-(oneway void)release;
-(void)removeObjectAtIndex:(unsigned long long)arg1 ;
-(id)retain;
-(unsigned long long)retainCount;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)objectAtIndex:(unsigned long long)arg1 ;
-(void)insertObject:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(void)replaceObjectAtIndex:(unsigned long long)arg1 withObject:(id)arg2 ;
-(BOOL)_isDeallocating;
-(BOOL)_tryRetain;
-(Class)classForCoder;
-(void)getObjects:(id*)arg1 range:(NSRange)arg2 ;
@end

