/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

//#import "FBValueObject.h"

//#import "NSCoding-Protocol.h"
//#import "NSCopying-Protocol.h"

@class FBMLocationAttachmentDataToSend, NSData;

@interface FBMLocationAttachmentData : NSObject //FBValueObject <NSCopying, NSCoding>
{
    NSData *_serializedExtensibleAttachment;
    FBMLocationAttachmentDataToSend *_dataToSend;
}

@property(readonly, copy, nonatomic) FBMLocationAttachmentDataToSend *dataToSend; // @synthesize dataToSend=_dataToSend;
@property(readonly, copy, nonatomic) NSData *serializedExtensibleAttachment; // @synthesize serializedExtensibleAttachment=_serializedExtensibleAttachment;
//- (void).cxx_destruct;
- (id)initWithSerializedExtensibleAttachment:(id)arg1 dataToSend:(id)arg2;

@end
