/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:57:11 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@interface NSRLEArray : NSObject <NSCopying, NSMutableCopying> {

	NSRefCountedRunArray* theList;

}
-(id)objectAtIndex:(unsigned long long)arg1 effectiveRange:(NSRange*)arg2 ;
-(id)objectAtIndex:(unsigned long long)arg1 effectiveRange:(NSRange*)arg2 runIndex:(unsigned long long*)arg3 ;
-(id)objectAtRunIndex:(unsigned long long)arg1 length:(unsigned long long*)arg2 ;
-(id)initWithRefCountedRunArray:(NSRefCountedRunArray*)arg1 ;
-(void)_makeNewListFrom:(NSRefCountedRunArray*)arg1 ;
-(void)finalize;
-(id)init;
-(void)dealloc;
-(unsigned long long)count;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
@end

