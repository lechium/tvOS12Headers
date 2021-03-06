/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:05:03 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/CloudDocs.framework/CloudDocs
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudDocs/BRFileObjectID.h>

@interface BRDocObjectID : BRFileObjectID {

	unsigned _docID;

}
+(BOOL)supportsSecureCoding;
-(BOOL)isDocumentID;
-(id)documentID;
-(unsigned long long)rawID;
-(id)initWithDocID:(unsigned)arg1 ;
-(id)initWithDocIDNumber:(id)arg1 ;
-(id)asString;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
@end

