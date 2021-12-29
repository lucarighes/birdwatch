#ifndef org_apache_lucene_codecs_uniformsplit_IntersectBlockReader_H
#define org_apache_lucene_codecs_uniformsplit_IntersectBlockReader_H

#include "org/apache/lucene/codecs/uniformsplit/BlockReader.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class TermsEnum$SeekStatus;
        class TermState;
      }
      namespace util {
        class BytesRef;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
  }
  namespace io {
    class IOException;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace codecs {
        namespace uniformsplit {

          class IntersectBlockReader : public ::org::apache::lucene::codecs::uniformsplit::BlockReader {
           public:
            enum {
              mid_next_7af2ea2e37ce82b8,
              mid_seekCeil_78824f53cd7bdb8a,
              mid_seekExact_553d972fe19daaec,
              mid_seekExact_9c778c9bce6694df,
              mid_seekExact_59a5c9565dacabef,
              mid_nextBlock_8454bd5aa23fd11e,
              mid_nextTermInBlockMatching_7af2ea2e37ce82b8,
              mid_endsWithCommonSuffix_5dd9ded580db9fa3,
              mid_getMinTermLength_9972fcc56b44e79d,
              mid_seekFirstBlock_8454bd5aa23fd11e,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit IntersectBlockReader(jobject obj) : ::org::apache::lucene::codecs::uniformsplit::BlockReader(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            IntersectBlockReader(const IntersectBlockReader& obj) : ::org::apache::lucene::codecs::uniformsplit::BlockReader(obj) {}

            ::org::apache::lucene::util::BytesRef next() const;
            ::org::apache::lucene::index::TermsEnum$SeekStatus seekCeil(const ::org::apache::lucene::util::BytesRef &) const;
            jboolean seekExact(const ::org::apache::lucene::util::BytesRef &) const;
            void seekExact(jlong) const;
            void seekExact(const ::org::apache::lucene::util::BytesRef &, const ::org::apache::lucene::index::TermState &) const;
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
      namespace codecs {
        namespace uniformsplit {
          extern PyType_Def PY_TYPE_DEF(IntersectBlockReader);
          extern PyTypeObject *PY_TYPE(IntersectBlockReader);

          class t_IntersectBlockReader {
          public:
            PyObject_HEAD
            IntersectBlockReader object;
            static PyObject *wrap_Object(const IntersectBlockReader&);
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
