#ifndef org_xml_sax_helpers_DefaultHandler_H
#define org_xml_sax_helpers_DefaultHandler_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class String;
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace xml {
    namespace sax {
      namespace helpers {

        class DefaultHandler : public ::java::lang::Object {
         public:
          enum {
            mid_init$_f2cc1bce94666404,
            mid_characters_d5128be76a214037,
            mid_endDocument_f2cc1bce94666404,
            mid_endElement_f05031826564616f,
            mid_endPrefixMapping_9fd2eb66a64e6f0f,
            mid_ignorableWhitespace_d5128be76a214037,
            mid_notationDecl_f05031826564616f,
            mid_processingInstruction_15b72f6a44ff93f2,
            mid_skippedEntity_9fd2eb66a64e6f0f,
            mid_startDocument_f2cc1bce94666404,
            mid_startPrefixMapping_15b72f6a44ff93f2,
            mid_unparsedEntityDecl_df9007a979db0c48,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit DefaultHandler(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          DefaultHandler(const DefaultHandler& obj) : ::java::lang::Object(obj) {}

          DefaultHandler();

          void characters(const JArray< jchar > &, jint, jint) const;
          void endDocument() const;
          void endElement(const ::java::lang::String &, const ::java::lang::String &, const ::java::lang::String &) const;
          void endPrefixMapping(const ::java::lang::String &) const;
          void ignorableWhitespace(const JArray< jchar > &, jint, jint) const;
          void notationDecl(const ::java::lang::String &, const ::java::lang::String &, const ::java::lang::String &) const;
          void processingInstruction(const ::java::lang::String &, const ::java::lang::String &) const;
          void skippedEntity(const ::java::lang::String &) const;
          void startDocument() const;
          void startPrefixMapping(const ::java::lang::String &, const ::java::lang::String &) const;
          void unparsedEntityDecl(const ::java::lang::String &, const ::java::lang::String &, const ::java::lang::String &, const ::java::lang::String &) const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace xml {
    namespace sax {
      namespace helpers {
        extern PyType_Def PY_TYPE_DEF(DefaultHandler);
        extern PyTypeObject *PY_TYPE(DefaultHandler);

        class t_DefaultHandler {
        public:
          PyObject_HEAD
          DefaultHandler object;
          static PyObject *wrap_Object(const DefaultHandler&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
