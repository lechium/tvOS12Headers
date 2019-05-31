/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:59:22 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ContactsFoundation/CNObservable.h>

@protocol CNForkJoinResultReportingStrategy;
@class NSArray;

@interface _CNForkJoinObservable : CNObservable {

	NSArray* _observables;
	id<CNForkJoinResultReportingStrategy> _resultReportingStrategy;

}
+(id)forkJoin:(id)arg1 ;
+(id)progressiveForkJoin:(id)arg1 ;
-(id)initWithObservables:(id)arg1 reportingStrategy:(id)arg2 ;
-(id)subscribe:(id)arg1 ;
@end
