//
// Generated file, do not edit! Created by nedtool 4.6 from src/node/application/imageTransmission/ImagePacket.msg.
//

#ifndef _IMAGEPACKET_M_H_
#define _IMAGEPACKET_M_H_

#include <omnetpp.h>

// nedtool version check
#define MSGC_VERSION 0x0406
#if (MSGC_VERSION!=OMNETPP_VERSION)
#    error Version mismatch! Probably this file was generated by an earlier version of nedtool: 'make clean' should help.
#endif



// cplusplus {{
#include "ApplicationPacket_m.h"
// }}

/**
 * Struct generated from src/node/application/imageTransmission/ImagePacket.msg:7 by nedtool.
 */
struct ImagePacketHeader
{
    ImagePacketHeader();
    unsigned short nodeID;
    double locX;
    double locY;
    int imagePktNumber;
    int totalImgPackets;
    int setNumber;
    simtime_t currentSnapshotTime;
    int bufferSize;
    int imageSourceNumber;
    opp_string originalImagesFolder;
};

void doPacking(cCommBuffer *b, ImagePacketHeader& a);
void doUnpacking(cCommBuffer *b, ImagePacketHeader& a);

/**
 * Class generated from <tt>src/node/application/imageTransmission/ImagePacket.msg:33</tt> by nedtool.
 * <pre>
 * packet ImagePacket extends ApplicationPacket
 * {
 *     ImagePacketHeader imgPktHeader;
 *     unsigned char bufferFragment[];
 * }
 * </pre>
 */
class ImagePacket : public ::ApplicationPacket
{
  protected:
    ImagePacketHeader imgPktHeader_var;
    unsigned char *bufferFragment_var; // array ptr
    unsigned int bufferFragment_arraysize;

  private:
    void copy(const ImagePacket& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const ImagePacket&);

  public:
    ImagePacket(const char *name=NULL, int kind=0);
    ImagePacket(const ImagePacket& other);
    virtual ~ImagePacket();
    ImagePacket& operator=(const ImagePacket& other);
    virtual ImagePacket *dup() const {return new ImagePacket(*this);}
    virtual void parsimPack(cCommBuffer *b);
    virtual void parsimUnpack(cCommBuffer *b);

    // field getter/setter methods
    virtual ImagePacketHeader& getImgPktHeader();
    virtual const ImagePacketHeader& getImgPktHeader() const {return const_cast<ImagePacket*>(this)->getImgPktHeader();}
    virtual void setImgPktHeader(const ImagePacketHeader& imgPktHeader);
    virtual void setBufferFragmentArraySize(unsigned int size);
    virtual unsigned int getBufferFragmentArraySize() const;
    virtual unsigned char getBufferFragment(unsigned int k) const;
    virtual void setBufferFragment(unsigned int k, unsigned char bufferFragment);
};

inline void doPacking(cCommBuffer *b, ImagePacket& obj) {obj.parsimPack(b);}
inline void doUnpacking(cCommBuffer *b, ImagePacket& obj) {obj.parsimUnpack(b);}


#endif // ifndef _IMAGEPACKET_M_H_
