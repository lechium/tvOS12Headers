/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:57:10 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface NSBoundKeyPath : NSObject {

	id _rootObject;
	NSString* _keyPath;

}

@property (assign) id rootObject; 
@property (readonly) NSString * keyPath; 
+(id)newKeyPathWithRootObject:(id)arg1 keyPathString:(id)arg2 ;
+(BOOL)automaticallyNotifiesObserversForKey:(id)arg1 ;
+(id)keyPathWithRootObject:(id)arg1 path:(const char*)arg2 ;
-(void)setRootObject:(id)arg1 ;
-(id)rootObject;
-(BOOL)validateValue:(inout id*)arg1 error:(out id*)arg2 ;
-(id)mutableArrayValue;
-(id)mutableOrderedSetValue;
-(id)mutableSetValue;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)value;
-(void)setValue:(id)arg1 ;
-(NSString *)keyPath;
@end
