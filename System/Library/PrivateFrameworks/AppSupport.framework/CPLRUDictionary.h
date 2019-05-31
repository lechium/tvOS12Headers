/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:57:22 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/AppSupport.framework/AppSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AppSupport/AppSupport-Structs.h>
@class CPLRUDictionaryNode;

@interface CPLRUDictionary : NSObject {

	CFDictionaryRef _dictionary;
	unsigned long long _maxCount;
	CPLRUDictionaryNode* _head;
	CPLRUDictionaryNode* _tail;

}
+(id)dictionaryWithMaximumCapacity:(unsigned long long)arg1 ;
-(void)_removeNode:(id)arg1 ;
-(void)_addNodeToFront:(id)arg1 ;
-(void)_moveNodeToFront:(id)arg1 ;
-(void)_removeNodeFromLinkedList:(id)arg1 ;
-(unsigned long long)linkedListCount;
-(id)allKeysInLRUOrder;
-(id)allValuesInLRUOrder;
-(id)objectForKeyWithoutAffectingLRU:(id)arg1 ;
-(void)dealloc;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
-(unsigned long long)count;
-(id)objectForKey:(id)arg1 ;
-(id)description;
-(void)removeAllObjects;
-(void)removeObjectForKey:(id)arg1 ;
-(id)allKeys;
-(id)initWithMaximumCapacity:(unsigned long long)arg1 ;
@end

