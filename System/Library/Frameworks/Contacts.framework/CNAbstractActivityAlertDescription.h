/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:59:42 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Contacts/CNPropertyDescription.h>
#import <libobjc.A.dylib/CNAbstractPropertyDescription.h>

@class NSString;

@interface CNAbstractActivityAlertDescription : CNPropertyDescription <CNAbstractPropertyDescription>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)canUnifyValue:(id)arg1 withValue:(id)arg2 ;
-(id)CNMutableValueForABMultivalue;
-(id)CNValueFromABValue:(void*)arg1 ;
-(void*)ABValueFromCNValue:(id)arg1 ;
-(Class)valueClass;
@end

