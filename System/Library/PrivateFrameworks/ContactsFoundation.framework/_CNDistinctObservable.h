/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:59:20 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ContactsFoundation/CNObservable.h>

@protocol CNObservable;
@class NSMutableSet;

@interface _CNDistinctObservable : CNObservable {

	id<CNObservable> _observable;
	NSMutableSet* _previouslyObservedResults;

}
-(BOOL)_resultIsDistinct:(id)arg1 ;
-(id)initWithObservable:(id)arg1 ;
-(id)subscribe:(id)arg1 ;
@end

