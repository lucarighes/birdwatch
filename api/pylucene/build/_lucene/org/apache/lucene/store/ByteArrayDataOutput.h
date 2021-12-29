#ifndef org_apache_lucene_store_ByteArrayDataOutput_H
#define org_apache_lucene_store_ByteArrayDataOutput_H

#include "org/apache/lucene/store/DataOutput.h"

namespace java {
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace store {

        class ByteArrayDataOutput : public ::org::apache::lucene::store::DataOutput {
         public:
          enum {
            mid_init$_f2cc1bce94666404,
            mid_init$_9ffdf271836656c4,
            mid_init$_43fdd39c09bb2fad,
            mid_getPosition_9972fcc56b44e79d,
            mid_reset_9ffdf271836656c4,
            mid_reset_43fdd39c09bb2fad,
            mid_writeByte_9c36fec3bac1d0c7,
            mid_writeBytes_43fdd39c09bb2fad,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit ByteArrayDataOutput(jobject obj) : ::org::apache::lucene::store::DataOutput(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          ByteArrayDataOutput(const ByteArrayDataOutput& obj) : ::org::apache::lucene::store::DataOutput(obj) {}

          ByteArrayDataOutput();
          ByteArrayDataOutput(const JArray< jbyte > &);
          ByteArrayDataOutput(const JArray< jbyte > &, jint, jint);

          jint getPosition() const;
          void reset(const JArray< jbyte > &) const;
          void reset(const JArray< jbyte > &, jint, jint) const;
          void writeByte(jbyte) const;
          void writeBytes(const JArray< jbyte > &, jint, jint) const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace store {
        extern PyType_Def PY_TYPE_DEF(ByteArrayDataOutput);
        extern PyTypeObject *PY_TYPE(ByteArrayDataOutput);

        class t_ByteArrayDataOutput {
        public:
          PyObject_HEAD
          ByteArrayDataOutput object;
          static PyObject *wrap_Object(const ByteArrayDataOutput&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
