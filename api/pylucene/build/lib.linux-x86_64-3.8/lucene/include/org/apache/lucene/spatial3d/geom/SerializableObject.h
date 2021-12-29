#ifndef org_apache_lucene_spatial3d_geom_SerializableObject_H
#define org_apache_lucene_spatial3d_geom_SerializableObject_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace spatial3d {
        namespace geom {
          class GeoPolygon;
          class SerializableObject;
          class GeoPoint;
          class PlanetModel;
          class PlanetObject;
        }
      }
    }
  }
}
namespace java {
  namespace io {
    class InputStream;
    class OutputStream;
    class IOException;
  }
  namespace lang {
    class Class;
    class String;
    class ClassNotFoundException;
  }
  namespace util {
    class BitSet;
    class List;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace spatial3d {
        namespace geom {

          class SerializableObject : public ::java::lang::Object {
           public:
            enum {
              mid_readBitSet_0b0f48d82746c736,
              mid_readBoolean_174f501a36e0b663,
              mid_readByteArray_1e5a62b02501f06d,
              mid_readClass_ef62a600991e43bd,
              mid_readDouble_2fea61274f3a2c28,
              mid_readHeterogeneousArray_cc849cdca62e7a25,
              mid_readHomogeneousArray_cc849cdca62e7a25,
              mid_readInt_238ab6568bf802e8,
              mid_readLong_4635c00839a53804,
              mid_readObject_91245c21bc491db3,
              mid_readObject_beb512d869766a25,
              mid_readObject_df4cf569a60ba1b7,
              mid_readObject_99386bb5f6628f84,
              mid_readPlanetObject_7e4d2b748ae24498,
              mid_readPointArray_c92c47102483364e,
              mid_readPolygonArray_693a293f10e8b8c7,
              mid_readString_82e414c2ccc532cd,
              mid_write_02fcdace254a9894,
              mid_writeBitSet_0586b80d101de9e0,
              mid_writeBoolean_539208f3c661c2fc,
              mid_writeByteArray_be3725db4052f0a4,
              mid_writeClass_c0354757aee1501b,
              mid_writeDouble_37b773dbba3d78da,
              mid_writeHeterogeneousArray_fda835f21ab66bb9,
              mid_writeHeterogeneousArray_dc6833459c818724,
              mid_writeHomogeneousArray_fda835f21ab66bb9,
              mid_writeHomogeneousArray_dc6833459c818724,
              mid_writeInt_9cd1b2cc4dc7e1cb,
              mid_writeLong_1e076dc5666c86cb,
              mid_writeObject_378abe38aa989628,
              mid_writePlanetObject_58582ecdd610a7b3,
              mid_writePointArray_f0ee9647bd699b23,
              mid_writePointArray_dc6833459c818724,
              mid_writePolygonArray_d64a78ff4bf6bbd4,
              mid_writePolygonArray_dc6833459c818724,
              mid_writeString_6769bfc075198100,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit SerializableObject(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            SerializableObject(const SerializableObject& obj) : ::java::lang::Object(obj) {}

            static ::java::util::BitSet readBitSet(const ::java::io::InputStream &);
            static jboolean readBoolean(const ::java::io::InputStream &);
            static JArray< jbyte > readByteArray(const ::java::io::InputStream &);
            static ::java::lang::Class readClass(const ::java::io::InputStream &);
            static jdouble readDouble(const ::java::io::InputStream &);
            static JArray< SerializableObject > readHeterogeneousArray(const ::org::apache::lucene::spatial3d::geom::PlanetModel &, const ::java::io::InputStream &, const ::java::lang::Class &);
            static JArray< SerializableObject > readHomogeneousArray(const ::org::apache::lucene::spatial3d::geom::PlanetModel &, const ::java::io::InputStream &, const ::java::lang::Class &);
            static jint readInt(const ::java::io::InputStream &);
            static jlong readLong(const ::java::io::InputStream &);
            static SerializableObject readObject(const ::java::io::InputStream &);
            static SerializableObject readObject(const ::java::io::InputStream &, const ::java::lang::Class &);
            static SerializableObject readObject(const ::org::apache::lucene::spatial3d::geom::PlanetModel &, const ::java::io::InputStream &);
            static SerializableObject readObject(const ::org::apache::lucene::spatial3d::geom::PlanetModel &, const ::java::io::InputStream &, const ::java::lang::Class &);
            static ::org::apache::lucene::spatial3d::geom::PlanetObject readPlanetObject(const ::java::io::InputStream &);
            static JArray< ::org::apache::lucene::spatial3d::geom::GeoPoint > readPointArray(const ::org::apache::lucene::spatial3d::geom::PlanetModel &, const ::java::io::InputStream &);
            static JArray< ::org::apache::lucene::spatial3d::geom::GeoPolygon > readPolygonArray(const ::org::apache::lucene::spatial3d::geom::PlanetModel &, const ::java::io::InputStream &);
            static ::java::lang::String readString(const ::java::io::InputStream &);
            void write(const ::java::io::OutputStream &) const;
            static void writeBitSet(const ::java::io::OutputStream &, const ::java::util::BitSet &);
            static void writeBoolean(const ::java::io::OutputStream &, jboolean);
            static void writeByteArray(const ::java::io::OutputStream &, const JArray< jbyte > &);
            static void writeClass(const ::java::io::OutputStream &, const ::java::lang::Class &);
            static void writeDouble(const ::java::io::OutputStream &, jdouble);
            static void writeHeterogeneousArray(const ::java::io::OutputStream &, const JArray< SerializableObject > &);
            static void writeHeterogeneousArray(const ::java::io::OutputStream &, const ::java::util::List &);
            static void writeHomogeneousArray(const ::java::io::OutputStream &, const JArray< SerializableObject > &);
            static void writeHomogeneousArray(const ::java::io::OutputStream &, const ::java::util::List &);
            static void writeInt(const ::java::io::OutputStream &, jint);
            static void writeLong(const ::java::io::OutputStream &, jlong);
            static void writeObject(const ::java::io::OutputStream &, const SerializableObject &);
            static void writePlanetObject(const ::java::io::OutputStream &, const ::org::apache::lucene::spatial3d::geom::PlanetObject &);
            static void writePointArray(const ::java::io::OutputStream &, const JArray< ::org::apache::lucene::spatial3d::geom::GeoPoint > &);
            static void writePointArray(const ::java::io::OutputStream &, const ::java::util::List &);
            static void writePolygonArray(const ::java::io::OutputStream &, const JArray< ::org::apache::lucene::spatial3d::geom::GeoPolygon > &);
            static void writePolygonArray(const ::java::io::OutputStream &, const ::java::util::List &);
            static void writeString(const ::java::io::OutputStream &, const ::java::lang::String &);
          };
        }
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace spatial3d {
        namespace geom {
          extern PyType_Def PY_TYPE_DEF(SerializableObject);
          extern PyTypeObject *PY_TYPE(SerializableObject);

          class t_SerializableObject {
          public:
            PyObject_HEAD
            SerializableObject object;
            static PyObject *wrap_Object(const SerializableObject&);
            static PyObject *wrap_jobject(const jobject&);
            static void install(PyObject *module);
            static void initialize(PyObject *module);
          };
        }
      }
    }
  }
}

#endif
