/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:01:43 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CorePDF/CorePDF-Structs.h>
@class NSMutableArray, NSArray;

@interface CPRMList : NSObject {

	NSMutableArray* _items;

}

@property (readonly) NSArray * listItems;              //@synthesize items=_items - In the implementation block
@property (readonly) CGPDFPageRef page; 
-(NSArray *)listItems;
-(CGRect)bounds;
-(void)addItem:(id)arg1 ;
-(CGPDFPageRef)page;
@end
